#ifndef UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP

class ASLVL_SpaceRig_Xmas_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SpawnSeed;
    FRandomStream RandomStream;
    int32 AmountToHide;
    TArray<class ABP_GiftBox_Weightless_C*> WeightlessBoxes;
    float LowestBoxSpeed;
    TArray<float> BoxSpeeds;
    float HighestBoxSpeed;
    class AStaticMeshActor* SM_XmasCapStandalone_8_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class AStaticMeshActor* SM_Xmas_Bow_02_2_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless_7_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless2_0_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless3_1_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless4_2_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless5_3_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless6_4_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless7_5_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless8_6_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless9_8_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless10_9_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless11_10_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless12_11_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless13_12_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless14_13_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless15_14_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless16_15_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless17_16_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless18_17_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless19_18_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless20_19_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless21_20_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless22_21_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless23_22_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless24_23_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless25_24_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_GiftBox_Weightless_C* BP_Phys_GiftBox_Weightless26_25_ExecuteUbergraph_SLVL_SpaceRig_Xmas_RefProperty;
    class ABP_Xmas_CandyCane_C* BP_Xmas_CandyCane6_5_EdGraph_0_RefProperty;
    class ABP_Xmas_CandyCane_C* BP_Xmas_CandyCane5_2_EdGraph_0_RefProperty;
    class ABP_Xmas_CandyCane_C* BP_Xmas_CandyCane4_15_EdGraph_0_RefProperty;
    class ABP_Xmas_CandyCane_C* BP_Xmas_CandyCane3_12_EdGraph_0_RefProperty;
    class ABP_Xmas_CandyCane_C* BP_Xmas_CandyCane_6_EdGraph_0_RefProperty;

    void OnRep_SpawnSeed();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SLVL_SpaceRig_Xmas(int32 EntryPoint);
};

#endif
