#ifndef UE4SS_SDK_BP_WormpodCarcass_HPP
#define UE4SS_SDK_BP_WormpodCarcass_HPP

class ABP_WormpodCarcass_C : public ABP_DropToTerrainDebris_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* StaticMesh;

    void BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WormpodCarcass(int32 EntryPoint);
};

#endif
