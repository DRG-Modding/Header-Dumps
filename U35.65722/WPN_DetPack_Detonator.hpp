#ifndef UE4SS_SDK_WPN_DetPack_Detonator_HPP
#define UE4SS_SDK_WPN_DetPack_Detonator_HPP

class AWPN_DetPack_Detonator_C : public ADetPackItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialInstanceDynamic* StatusMaterial;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AWPN_DetPack_Detonator_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Detpack_GearStatEntry, bool CallFunc_UPGDESC_Detpack_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Detpack_GearStatEntry_1, bool CallFunc_UPGDESC_Detpack_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Detpack_GearStatEntry_2, bool CallFunc_UPGDESC_Detpack_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_Detpack_GearStatEntry_3, bool CallFunc_UPGDESC_Detpack_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_Detpack_GearStatEntry_4, bool CallFunc_UPGDESC_Detpack_HasUpgradedValue_4, FGearStatEntry CallFunc_UPGDESC_Capacity_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void RecieveStartUsing();
    void RecieveEquipped();
    void ReceiveResupply(float percentage);
    void Receive_OnRep_IsDetonatorOut();
    void ExecuteUbergraph_WPN_DetPack_Detonator(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_GetCurrentGrenades_ReturnValue, class UABP_Detonator_C* K2Node_DynamicCast_AsABP_Detonator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentGrenades_ReturnValue_1, float K2Node_Event_percentage, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_GetCurrentGrenades_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2);
};

#endif
