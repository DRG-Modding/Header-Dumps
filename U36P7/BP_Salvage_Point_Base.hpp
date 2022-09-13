#ifndef UE4SS_SDK_BP_Salvage_Point_Base_HPP
#define UE4SS_SDK_BP_Salvage_Point_Base_HPP

class ABP_Salvage_Point_Base_C : public ABP_Salvage_Point_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* DistressSphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class USingleUsableComponent* SingleUsable;

    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void EnableRepair();
    void ExecuteUbergraph_BP_Salvage_Point_Base(int32 EntryPoint);
};

#endif
