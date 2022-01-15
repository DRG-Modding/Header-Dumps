#ifndef UE4SS_SDK_BP_Salvage_Point_Base_HPP
#define UE4SS_SDK_BP_Salvage_Point_Base_HPP

class ABP_Salvage_Point_Base_C : ABP_Salvage_Point_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* DistressSphere;
    UTerrainPlacementComponent* terrainPlacement;
    USingleUsableComponent* SingleUsable;

    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void EnableRepair();
    void ExecuteUbergraph_BP_Salvage_Point_Base(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_Not_PreBool_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UGM_Salvage_C* K2Node_DynamicCast_AsGM_Salvage, bool K2Node_DynamicCast_bSuccess);
}

#endif
