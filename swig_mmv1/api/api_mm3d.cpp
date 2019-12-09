#include "api_mm3d.h"
#include <iostream>

CamStenope * CamOrientFromFile(std::string filename)
{
	cElemAppliSetFile anEASF(filename);
	return CamOrientGenFromFile(filename,anEASF.mICNM);
}

void createIdealCamXML(double focale, Pt2dr aPP, Pt2di aSz, std::string oriName, std::string imgName, std::string idCam, ElRotation3D &orient, double prof=0, double rayonUtile=0)
{
    std::vector<double> paramFocal;
    cCamStenopeDistPolyn anIdealCam(true,focale,aPP,ElDistortionPolynomiale::DistId(3,1.0),paramFocal);
    if (prof!=0)
        anIdealCam.SetProfondeur(prof);
    anIdealCam.SetSz(aSz);
    anIdealCam.SetIdentCam(idCam);
    if (rayonUtile>0)
        anIdealCam.SetRayonUtile(rayonUtile,30);
    anIdealCam.SetOrientation(orient);
    anIdealCam.SetIncCentre(Pt3dr(1,1,1));

    MakeFileXML(anIdealCam.StdExportCalibGlob(),oriName+"/Orientation-" + NameWithoutDir(oriName) + imgName + ".tif.xml","MicMacForAPERO");
}

ElRotation3D list2rot(std::vector<double> l)
{
    ElMatrix<REAL> mat(3,3);
    int k=0;
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
        {
            mat(i,j)=l.at(k);
            k++;
        }
    
    ElRotation3D r(Pt3dr(),mat,false);
    return r;
}

std::vector<double> rot2list(ElRotation3D &r)
{
    std::vector<double> l;
    l.resize(9);
    int k=0;
    ElMatrix<REAL> mat=r.Mat();
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
        {
            l[k]=mat(i,j);
            k++;
        }
    
    return l;
}
