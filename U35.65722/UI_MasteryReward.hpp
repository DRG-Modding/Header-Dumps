#ifndef UE4SS_SDK_UI_MasteryReward_HPP
#define UE4SS_SDK_UI_MasteryReward_HPP

class UUI_MasteryReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_GearFiller;
    class UImage* ICON_GearOutline;
    class UITM_SkinIcon_C* ITM_SkinIcon;
    class UOverlay* Overlay_0;
    class USizeBox* SizeBox_Weapon_Icon;
    class UTextBlock* TextBlock_Bonus;
    class UTextBlock* TextBlock_Description;
    class UUnlockReward* Reward;
    class UUpgradableGearComponent* ItemGearComponent;

    void Construct();
    void ExecuteUbergraph_UI_MasteryReward(int32 EntryPoint, class USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class UPermanentItemUpgradeReward* K2Node_DynamicCast_AsPermanent_Item_Upgrade_Reward, bool K2Node_DynamicCast_bSuccess_1, FText CallFunc_TextToUpper_ReturnValue_1, FText CallFunc_GetGearName_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_1, FText CallFunc_Format_ReturnValue_2, class UTexture2D* CallFunc_GetIconBG_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_2, const FText CallFunc_GetCraftableName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_3);
};

#endif
