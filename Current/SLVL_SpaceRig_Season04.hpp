#ifndef UE4SS_SDK_SLVL_SpaceRig_Season04_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Season04_HPP

class ASLVL_SpaceRig_Season04_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SpawnSeed;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet9_2_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet8_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet7_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet6_94_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet5_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet4_26_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet3_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardHelmet2_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_7_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_05_6_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_2_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_04_17_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_03_12_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_02_125_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_57_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_BiohazardSuit_01_15_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum8_29_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum7_26_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum6_23_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum5_70_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum4_51_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum3_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum2_23_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Vacuum_14_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper8_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper7_13_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper6_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper5_67_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper4_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper3_26_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper2_17_EdGraph_0_RefProperty;
    class AStaticMeshActor* SM_Plague_Soaper9_EdGraph_0_RefProperty;

    void Unhide(FRandomStream& RandomStream, const TArray<class AStaticMeshActor*>& Meshes, int32 Number To Unhide);
    void OnRep_SpawnSeed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SLVL_SpaceRig_Season04(int32 EntryPoint);
};

#endif
