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
    void ExecuteUbergraph_BP_Salvage_Point_Base(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_Not_PreBool_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGM_Salvage_C* K2Node_DynamicCast_AsGM_Salvage, bool K2Node_DynamicCast_bSuccess);
};

#endif
