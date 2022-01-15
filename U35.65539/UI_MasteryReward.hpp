#ifndef UE4SS_SDK_UI_MasteryReward_HPP
#define UE4SS_SDK_UI_MasteryReward_HPP

class UUI_MasteryReward_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ICON_GearFiller;
    UImage* ICON_GearOutline;
    UITM_SkinIcon_C* ITM_SkinIcon;
    UOverlay* Overlay_0;
    USizeBox* SizeBox_Weapon_Icon;
    UTextBlock* TextBlock_Bonus;
    UTextBlock* TextBlock_Description;
    UUnlockReward* Reward;
    UUpgradableGearComponent* ItemGearComponent;

    void Construct();
    void ExecuteUbergraph_UI_MasteryReward(int32 EntryPoint, USkinUnlock* K2Node_DynamicCast_AsSkin_Unlock, bool K2Node_DynamicCast_bSuccess, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, UPermanentItemUpgradeReward* K2Node_DynamicCast_AsPermanent_Item_Upgrade_Reward, bool K2Node_DynamicCast_bSuccess_1, FText CallFunc_TextToUpper_ReturnValue_1, FText CallFunc_GetGearName_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_1, FText CallFunc_Format_ReturnValue_2, UTexture2D* CallFunc_GetIconBG_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_IsValid_ReturnValue, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_2, const FText CallFunc_GetCraftableName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_3);
}

#endif
