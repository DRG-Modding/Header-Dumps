#ifndef UE4SS_SDK_WPN_ShieldRegeneratorItem_HPP
#define UE4SS_SDK_WPN_ShieldRegeneratorItem_HPP

class AWPN_ShieldRegeneratorItem_C : public AShieldGeneratorItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* RechargeAudio;
    class UMaterialInterface* RechargedMaterial;

    void UpdateMaterial(bool IsRecharging, bool PlayAudio, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_GetIsRecharging_ReturnValue, int32 CallFunc_GetCurrentAmount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry K2Node_MakeStruct_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AWPN_ShieldRegeneratorItem_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry, bool CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_1, bool CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_2, bool CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_ShieldRegenerator_GearStatEntry_3, bool CallFunc_UPGDESC_ShieldRegenerator_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_Capacity_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_5);
    void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
    void RecieveStartUsing();
    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void ReceiveGeneratorRecharged();
    void ReceiveGeneratorRechargeProgress(float Progress);
    void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32 Amount);
    void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32 Amount);
    void ReceiveGeneratorReturned();
    void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32 EntryPoint, bool CallFunc_IsOnSpaceRig_OnSpaceRig, bool CallFunc_Not_PreBool_ReturnValue, class AThrowableActor* K2Node_Event_thrownActor, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_Progress, bool CallFunc_IsLocallyControlled_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Amount_1, int32 K2Node_ComponentBoundEvent_Amount, bool CallFunc_IsLocallyControlled_ReturnValue_2);
};

#endif
