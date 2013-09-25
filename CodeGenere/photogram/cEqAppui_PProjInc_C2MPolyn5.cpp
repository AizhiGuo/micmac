// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PProjInc_C2MPolyn5.h"


cEqAppui_PProjInc_C2MPolyn5::cEqAppui_PProjInc_C2MPolyn5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,39));
   AddIntRef (cIncIntervale("Orient",39,45));
   AddIntRef (cIncIntervale("Tmp_PTer",45,48));
   Close(false);
}



void cEqAppui_PProjInc_C2MPolyn5::ComputeVal()
{
   double tmp0_ = mCompCoord[39];
   double tmp1_ = mCompCoord[40];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[45];
   double tmp4_ = mCompCoord[46];
   double tmp5_ = mCompCoord[47];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[41];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x/tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[42];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y/tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[43];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z/tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[44];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mLocXIm/mLocPolyn5_State_0_0;
   double tmp39_ = mLocYIm/mLocPolyn5_State_0_0;
   double tmp40_ = (tmp38_)*(tmp38_);
   double tmp41_ = (tmp39_)*(tmp39_);
   double tmp42_ = tmp40_*(tmp38_);
   double tmp43_ = (tmp39_)*(tmp38_);
   double tmp44_ = tmp43_*(tmp38_);
   double tmp45_ = tmp41_*(tmp38_);
   double tmp46_ = (tmp39_)*tmp41_;
   double tmp47_ = tmp42_*(tmp38_);
   double tmp48_ = tmp44_*(tmp38_);
   double tmp49_ = tmp45_*(tmp38_);
   double tmp50_ = tmp46_*(tmp38_);
   double tmp51_ = (tmp39_)*tmp46_;
   double tmp52_ = mCompCoord[0];
   double tmp53_ = -(tmp6_);
   double tmp54_ = tmp7_*tmp20_;
   double tmp55_ = tmp6_*tmp20_;
   double tmp56_ = tmp53_*tmp19_;
   double tmp57_ = tmp54_*tmp21_;
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = (tmp58_)*(tmp17_);
   double tmp60_ = tmp7_*tmp19_;
   double tmp61_ = tmp55_*tmp21_;
   double tmp62_ = tmp60_+tmp61_;
   double tmp63_ = (tmp62_)*(tmp29_);
   double tmp64_ = tmp59_+tmp63_;
   double tmp65_ = tmp2_*tmp21_;
   double tmp66_ = tmp65_*(tmp37_);
   double tmp67_ = tmp64_+tmp66_;
   double tmp68_ = mCompCoord[3];
   double tmp69_ = mCompCoord[4];
   double tmp70_ = mCompCoord[5];
   double tmp71_ = (tmp38_)*(tmp39_);
   double tmp72_ = mCompCoord[6];
   double tmp73_ = tmp47_*(tmp38_);
   double tmp74_ = tmp48_*(tmp38_);
   double tmp75_ = tmp49_*(tmp38_);
   double tmp76_ = tmp50_*(tmp38_);
   double tmp77_ = tmp51_*(tmp38_);
   double tmp78_ = (tmp39_)*tmp51_;

  mVal[0] = (mCompCoord[1]+tmp52_*((tmp7_*tmp2_*(tmp17_)+tmp6_*tmp2_*(tmp29_)+tmp8_*(tmp37_))/(tmp67_)))-((((1+tmp68_)*(tmp38_)+tmp69_*(tmp39_))-tmp70_*2*tmp40_+tmp72_*tmp71_+mCompCoord[7]*tmp41_)*mLocPolyn5_State_0_0+(mCompCoord[9]*tmp42_+mCompCoord[10]*tmp44_+mCompCoord[11]*tmp45_+mCompCoord[12]*tmp46_+mCompCoord[17]*tmp47_+mCompCoord[18]*tmp48_+mCompCoord[19]*tmp49_+mCompCoord[20]*tmp50_+mCompCoord[21]*tmp51_+mCompCoord[27]*tmp73_+mCompCoord[28]*tmp74_+mCompCoord[29]*tmp75_+mCompCoord[30]*tmp76_+mCompCoord[31]*tmp77_+mCompCoord[32]*tmp78_)*mLocPolyn5_State_0_0);

  mVal[1] = (mCompCoord[2]+tmp52_*(((tmp53_*tmp21_+tmp54_*tmp18_)*(tmp17_)+(tmp7_*tmp21_+tmp55_*tmp18_)*(tmp29_)+tmp2_*tmp18_*(tmp37_))/(tmp67_)))-((((1-tmp68_)*(tmp39_)+tmp69_*(tmp38_)+tmp70_*tmp71_)-tmp72_*2*tmp41_+mCompCoord[8]*tmp40_)*mLocPolyn5_State_0_0+(mCompCoord[13]*tmp42_+mCompCoord[14]*tmp44_+mCompCoord[15]*tmp45_+mCompCoord[16]*tmp46_+mCompCoord[22]*tmp47_+mCompCoord[23]*tmp48_+mCompCoord[24]*tmp49_+mCompCoord[25]*tmp50_+mCompCoord[26]*tmp51_+mCompCoord[33]*tmp73_+mCompCoord[34]*tmp74_+mCompCoord[35]*tmp75_+mCompCoord[36]*tmp76_+mCompCoord[37]*tmp77_+mCompCoord[38]*tmp78_)*mLocPolyn5_State_0_0);

}


void cEqAppui_PProjInc_C2MPolyn5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[39];
   double tmp1_ = mCompCoord[40];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[45];
   double tmp4_ = mCompCoord[46];
   double tmp5_ = mCompCoord[47];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[41];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x/tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[42];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y/tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[43];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z/tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[44];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mLocXIm/mLocPolyn5_State_0_0;
   double tmp39_ = mLocYIm/mLocPolyn5_State_0_0;
   double tmp40_ = (tmp38_)*(tmp38_);
   double tmp41_ = (tmp39_)*(tmp39_);
   double tmp42_ = tmp40_*(tmp38_);
   double tmp43_ = (tmp39_)*(tmp38_);
   double tmp44_ = tmp43_*(tmp38_);
   double tmp45_ = tmp41_*(tmp38_);
   double tmp46_ = (tmp39_)*tmp41_;
   double tmp47_ = tmp42_*(tmp38_);
   double tmp48_ = tmp44_*(tmp38_);
   double tmp49_ = tmp45_*(tmp38_);
   double tmp50_ = tmp46_*(tmp38_);
   double tmp51_ = (tmp39_)*tmp46_;
   double tmp52_ = tmp7_*tmp2_;
   double tmp53_ = tmp52_*(tmp17_);
   double tmp54_ = tmp6_*tmp2_;
   double tmp55_ = tmp54_*(tmp29_);
   double tmp56_ = tmp53_+tmp55_;
   double tmp57_ = tmp8_*(tmp37_);
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = -(tmp6_);
   double tmp60_ = tmp59_*tmp19_;
   double tmp61_ = tmp7_*tmp20_;
   double tmp62_ = tmp61_*tmp21_;
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = (tmp63_)*(tmp17_);
   double tmp65_ = tmp7_*tmp19_;
   double tmp66_ = tmp6_*tmp20_;
   double tmp67_ = tmp66_*tmp21_;
   double tmp68_ = tmp65_+tmp67_;
   double tmp69_ = (tmp68_)*(tmp29_);
   double tmp70_ = tmp64_+tmp69_;
   double tmp71_ = tmp2_*tmp21_;
   double tmp72_ = tmp71_*(tmp37_);
   double tmp73_ = tmp70_+tmp72_;
   double tmp74_ = (tmp58_)/(tmp73_);
   double tmp75_ = (tmp38_)*(tmp39_);
   double tmp76_ = tmp47_*(tmp38_);
   double tmp77_ = tmp48_*(tmp38_);
   double tmp78_ = tmp49_*(tmp38_);
   double tmp79_ = tmp50_*(tmp38_);
   double tmp80_ = tmp51_*(tmp38_);
   double tmp81_ = (tmp39_)*tmp51_;
   double tmp82_ = -(1);
   double tmp83_ = tmp82_*tmp6_;
   double tmp84_ = mCompCoord[0];
   double tmp85_ = tmp82_*tmp8_;
   double tmp86_ = -(tmp2_);
   double tmp87_ = ElSquare(tmp73_);
   double tmp88_ = -(tmp21_);
   double tmp89_ = tmp82_*tmp18_;
   double tmp90_ = ElSquare(tmp5_);
   double tmp91_ = -(mLocProjK_x);
   double tmp92_ = tmp91_/tmp90_;
   double tmp93_ = -(mLocProjK_y);
   double tmp94_ = tmp93_/tmp90_;
   double tmp95_ = -(mLocProjK_z);
   double tmp96_ = tmp95_/tmp90_;
   double tmp97_ = mCompCoord[3];
   double tmp98_ = mCompCoord[4];
   double tmp99_ = mCompCoord[5];
   double tmp100_ = mCompCoord[6];
   double tmp101_ = tmp59_*tmp21_;
   double tmp102_ = tmp61_*tmp18_;
   double tmp103_ = tmp101_+tmp102_;
   double tmp104_ = (tmp103_)*(tmp17_);
   double tmp105_ = tmp7_*tmp21_;
   double tmp106_ = tmp66_*tmp18_;
   double tmp107_ = tmp105_+tmp106_;
   double tmp108_ = (tmp107_)*(tmp29_);
   double tmp109_ = tmp104_+tmp108_;
   double tmp110_ = tmp2_*tmp18_;
   double tmp111_ = tmp110_*(tmp37_);
   double tmp112_ = tmp109_+tmp111_;
   double tmp113_ = (tmp112_)/(tmp73_);
   double tmp114_ = (tmp38_)*mLocPolyn5_State_0_0;
   double tmp115_ = -(tmp114_);
   double tmp116_ = tmp75_*mLocPolyn5_State_0_0;
   double tmp117_ = -(tmp116_);
   double tmp118_ = tmp42_*mLocPolyn5_State_0_0;
   double tmp119_ = -(tmp118_);
   double tmp120_ = tmp44_*mLocPolyn5_State_0_0;
   double tmp121_ = -(tmp120_);
   double tmp122_ = tmp45_*mLocPolyn5_State_0_0;
   double tmp123_ = -(tmp122_);
   double tmp124_ = tmp46_*mLocPolyn5_State_0_0;
   double tmp125_ = -(tmp124_);
   double tmp126_ = tmp47_*mLocPolyn5_State_0_0;
   double tmp127_ = -(tmp126_);
   double tmp128_ = tmp48_*mLocPolyn5_State_0_0;
   double tmp129_ = -(tmp128_);
   double tmp130_ = tmp49_*mLocPolyn5_State_0_0;
   double tmp131_ = -(tmp130_);
   double tmp132_ = tmp50_*mLocPolyn5_State_0_0;
   double tmp133_ = -(tmp132_);
   double tmp134_ = tmp51_*mLocPolyn5_State_0_0;
   double tmp135_ = -(tmp134_);
   double tmp136_ = tmp76_*mLocPolyn5_State_0_0;
   double tmp137_ = -(tmp136_);
   double tmp138_ = tmp77_*mLocPolyn5_State_0_0;
   double tmp139_ = -(tmp138_);
   double tmp140_ = tmp78_*mLocPolyn5_State_0_0;
   double tmp141_ = -(tmp140_);
   double tmp142_ = tmp79_*mLocPolyn5_State_0_0;
   double tmp143_ = -(tmp142_);
   double tmp144_ = tmp80_*mLocPolyn5_State_0_0;
   double tmp145_ = -(tmp144_);
   double tmp146_ = tmp81_*mLocPolyn5_State_0_0;
   double tmp147_ = -(tmp146_);
   double tmp148_ = -(tmp7_);
   double tmp149_ = tmp83_*tmp20_;
   double tmp150_ = tmp148_*tmp19_;
   double tmp151_ = tmp149_*tmp21_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = (tmp152_)*(tmp17_);
   double tmp154_ = tmp83_*tmp19_;
   double tmp155_ = tmp154_+tmp62_;
   double tmp156_ = (tmp155_)*(tmp29_);
   double tmp157_ = tmp153_+tmp156_;
   double tmp158_ = tmp86_*tmp7_;
   double tmp159_ = tmp86_*tmp6_;
   double tmp160_ = tmp158_*tmp21_;
   double tmp161_ = tmp160_*(tmp17_);
   double tmp162_ = tmp159_*tmp21_;
   double tmp163_ = tmp162_*(tmp29_);
   double tmp164_ = tmp161_+tmp163_;
   double tmp165_ = tmp85_*tmp21_;
   double tmp166_ = tmp165_*(tmp37_);
   double tmp167_ = tmp164_+tmp166_;
   double tmp168_ = tmp88_*tmp59_;
   double tmp169_ = tmp89_*tmp61_;
   double tmp170_ = tmp168_+tmp169_;
   double tmp171_ = (tmp170_)*(tmp17_);
   double tmp172_ = tmp88_*tmp7_;
   double tmp173_ = tmp89_*tmp66_;
   double tmp174_ = tmp172_+tmp173_;
   double tmp175_ = (tmp174_)*(tmp29_);
   double tmp176_ = tmp171_+tmp175_;
   double tmp177_ = tmp89_*tmp2_;
   double tmp178_ = tmp177_*(tmp37_);
   double tmp179_ = tmp176_+tmp178_;
   double tmp180_ = tmp82_*(tmp63_);
   double tmp181_ = tmp82_*(tmp68_);
   double tmp182_ = tmp82_*tmp71_;
   double tmp183_ = mLocProjI_x*(tmp63_);
   double tmp184_ = mLocProjI_y*(tmp68_);
   double tmp185_ = tmp183_+tmp184_;
   double tmp186_ = mLocProjI_z*tmp71_;
   double tmp187_ = tmp185_+tmp186_;
   double tmp188_ = mLocProjJ_x*(tmp63_);
   double tmp189_ = mLocProjJ_y*(tmp68_);
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = mLocProjJ_z*tmp71_;
   double tmp192_ = tmp190_+tmp191_;
   double tmp193_ = (tmp92_)*(tmp63_);
   double tmp194_ = (tmp94_)*(tmp68_);
   double tmp195_ = tmp193_+tmp194_;
   double tmp196_ = (tmp96_)*tmp71_;
   double tmp197_ = tmp195_+tmp196_;

  mVal[0] = (mCompCoord[1]+tmp84_*(tmp74_))-((((1+tmp97_)*(tmp38_)+tmp98_*(tmp39_))-tmp99_*2*tmp40_+tmp100_*tmp75_+mCompCoord[7]*tmp41_)*mLocPolyn5_State_0_0+(mCompCoord[9]*tmp42_+mCompCoord[10]*tmp44_+mCompCoord[11]*tmp45_+mCompCoord[12]*tmp46_+mCompCoord[17]*tmp47_+mCompCoord[18]*tmp48_+mCompCoord[19]*tmp49_+mCompCoord[20]*tmp50_+mCompCoord[21]*tmp51_+mCompCoord[27]*tmp76_+mCompCoord[28]*tmp77_+mCompCoord[29]*tmp78_+mCompCoord[30]*tmp79_+mCompCoord[31]*tmp80_+mCompCoord[32]*tmp81_)*mLocPolyn5_State_0_0);

  mCompDer[0][0] = tmp74_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp115_;
  mCompDer[0][4] = -((tmp39_)*mLocPolyn5_State_0_0);
  mCompDer[0][5] = -(-(2*tmp40_)*mLocPolyn5_State_0_0);
  mCompDer[0][6] = tmp117_;
  mCompDer[0][7] = -(tmp41_*mLocPolyn5_State_0_0);
  mCompDer[0][8] = 0;
  mCompDer[0][9] = tmp119_;
  mCompDer[0][10] = tmp121_;
  mCompDer[0][11] = tmp123_;
  mCompDer[0][12] = tmp125_;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = tmp127_;
  mCompDer[0][18] = tmp129_;
  mCompDer[0][19] = tmp131_;
  mCompDer[0][20] = tmp133_;
  mCompDer[0][21] = tmp135_;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = tmp137_;
  mCompDer[0][28] = tmp139_;
  mCompDer[0][29] = tmp141_;
  mCompDer[0][30] = tmp143_;
  mCompDer[0][31] = tmp145_;
  mCompDer[0][32] = tmp147_;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = (((tmp83_*tmp2_*(tmp17_)+tmp52_*(tmp29_))*(tmp73_)-(tmp58_)*(tmp157_))/tmp87_)*tmp84_;
  mCompDer[0][40] = (((tmp85_*tmp7_*(tmp17_)+tmp85_*tmp6_*(tmp29_)+tmp2_*(tmp37_))*(tmp73_)-(tmp58_)*(tmp167_))/tmp87_)*tmp84_;
  mCompDer[0][41] = (-((tmp58_)*(tmp179_))/tmp87_)*tmp84_;
  mCompDer[0][42] = ((tmp82_*tmp52_*(tmp73_)-(tmp58_)*tmp180_)/tmp87_)*tmp84_;
  mCompDer[0][43] = ((tmp82_*tmp54_*(tmp73_)-(tmp58_)*tmp181_)/tmp87_)*tmp84_;
  mCompDer[0][44] = ((tmp85_*(tmp73_)-(tmp58_)*tmp182_)/tmp87_)*tmp84_;
  mCompDer[0][45] = (((mLocProjI_x*tmp52_+mLocProjI_y*tmp54_+mLocProjI_z*tmp8_)*(tmp73_)-(tmp58_)*(tmp187_))/tmp87_)*tmp84_;
  mCompDer[0][46] = (((mLocProjJ_x*tmp52_+mLocProjJ_y*tmp54_+mLocProjJ_z*tmp8_)*(tmp73_)-(tmp58_)*(tmp192_))/tmp87_)*tmp84_;
  mCompDer[0][47] = ((((tmp92_)*tmp52_+(tmp94_)*tmp54_+(tmp96_)*tmp8_)*(tmp73_)-(tmp58_)*(tmp197_))/tmp87_)*tmp84_;
  mVal[1] = (mCompCoord[2]+tmp84_*(tmp113_))-((((1-tmp97_)*(tmp39_)+tmp98_*(tmp38_)+tmp99_*tmp75_)-tmp100_*2*tmp41_+mCompCoord[8]*tmp40_)*mLocPolyn5_State_0_0+(mCompCoord[13]*tmp42_+mCompCoord[14]*tmp44_+mCompCoord[15]*tmp45_+mCompCoord[16]*tmp46_+mCompCoord[22]*tmp47_+mCompCoord[23]*tmp48_+mCompCoord[24]*tmp49_+mCompCoord[25]*tmp50_+mCompCoord[26]*tmp51_+mCompCoord[33]*tmp76_+mCompCoord[34]*tmp77_+mCompCoord[35]*tmp78_+mCompCoord[36]*tmp79_+mCompCoord[37]*tmp80_+mCompCoord[38]*tmp81_)*mLocPolyn5_State_0_0);

  mCompDer[1][0] = tmp113_;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 1;
  mCompDer[1][3] = -(tmp82_*(tmp39_)*mLocPolyn5_State_0_0);
  mCompDer[1][4] = tmp115_;
  mCompDer[1][5] = tmp117_;
  mCompDer[1][6] = -(-(2*tmp41_)*mLocPolyn5_State_0_0);
  mCompDer[1][7] = 0;
  mCompDer[1][8] = -(tmp40_*mLocPolyn5_State_0_0);
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = tmp119_;
  mCompDer[1][14] = tmp121_;
  mCompDer[1][15] = tmp123_;
  mCompDer[1][16] = tmp125_;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = tmp127_;
  mCompDer[1][23] = tmp129_;
  mCompDer[1][24] = tmp131_;
  mCompDer[1][25] = tmp133_;
  mCompDer[1][26] = tmp135_;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = tmp137_;
  mCompDer[1][34] = tmp139_;
  mCompDer[1][35] = tmp141_;
  mCompDer[1][36] = tmp143_;
  mCompDer[1][37] = tmp145_;
  mCompDer[1][38] = tmp147_;
  mCompDer[1][39] = ((((tmp148_*tmp21_+tmp149_*tmp18_)*(tmp17_)+(tmp83_*tmp21_+tmp102_)*(tmp29_))*(tmp73_)-(tmp112_)*(tmp157_))/tmp87_)*tmp84_;
  mCompDer[1][40] = (((tmp158_*tmp18_*(tmp17_)+tmp159_*tmp18_*(tmp29_)+tmp85_*tmp18_*(tmp37_))*(tmp73_)-(tmp112_)*(tmp167_))/tmp87_)*tmp84_;
  mCompDer[1][41] = ((((tmp89_*tmp59_+tmp21_*tmp61_)*(tmp17_)+(tmp89_*tmp7_+tmp21_*tmp66_)*(tmp29_)+tmp21_*tmp2_*(tmp37_))*(tmp73_)-(tmp112_)*(tmp179_))/tmp87_)*tmp84_;
  mCompDer[1][42] = ((tmp82_*(tmp103_)*(tmp73_)-(tmp112_)*tmp180_)/tmp87_)*tmp84_;
  mCompDer[1][43] = ((tmp82_*(tmp107_)*(tmp73_)-(tmp112_)*tmp181_)/tmp87_)*tmp84_;
  mCompDer[1][44] = ((tmp82_*tmp110_*(tmp73_)-(tmp112_)*tmp182_)/tmp87_)*tmp84_;
  mCompDer[1][45] = (((mLocProjI_x*(tmp103_)+mLocProjI_y*(tmp107_)+mLocProjI_z*tmp110_)*(tmp73_)-(tmp112_)*(tmp187_))/tmp87_)*tmp84_;
  mCompDer[1][46] = (((mLocProjJ_x*(tmp103_)+mLocProjJ_y*(tmp107_)+mLocProjJ_z*tmp110_)*(tmp73_)-(tmp112_)*(tmp192_))/tmp87_)*tmp84_;
  mCompDer[1][47] = ((((tmp92_)*(tmp103_)+(tmp94_)*(tmp107_)+(tmp96_)*tmp110_)*(tmp73_)-(tmp112_)*(tmp197_))/tmp87_)*tmp84_;
}


void cEqAppui_PProjInc_C2MPolyn5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PProjInc_C2MPolyn5 Has no Der Sec");
}

void cEqAppui_PProjInc_C2MPolyn5::SetPolyn5_State_0_0(double aVal){ mLocPolyn5_State_0_0 = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PProjInc_C2MPolyn5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PProjInc_C2MPolyn5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn5_State_0_0") return & mLocPolyn5_State_0_0;
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PProjInc_C2MPolyn5::mTheAuto("cEqAppui_PProjInc_C2MPolyn5",cEqAppui_PProjInc_C2MPolyn5::Alloc);


cElCompiledFonc *  cEqAppui_PProjInc_C2MPolyn5::Alloc()
{  return new cEqAppui_PProjInc_C2MPolyn5();
}


