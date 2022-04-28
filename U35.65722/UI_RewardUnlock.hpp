#ifndef UE4SS_SDK_UI_RewardUnlock_HPP
#define UE4SS_SDK_UI_RewardUnlock_HPP

class UUI_RewardUnlock_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UImage* BigImage;
    class USizeBox* BigImageSize;
    class UHorizontalBox* HorizontalBox_1;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UWidgetSwitcher* ImageSwitcher;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon;
    class UTextBlock* UnlockedText;
    class UTextBlock* UnlockTitle;

    void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID*& OutputPin, bool Temp_bool_Variable, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerCharacterID* K2Node_Select_Default);
    void GetUnlockDetails(bool& IsHidden, FText& OutTitle, class UTexture*& Icon, FLinearColor& IconTint, class UTexture2D*& BigImage, class UActivityCardReward* K2Node_DynamicCast_AsActivity_Card_Reward, bool K2Node_DynamicCast_bSuccess, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess_1, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, const FText CallFunc_GetCraftableName_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Format_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, class UTexture2D* CallFunc_GetCraftableIcon_ReturnValue, class UPureTextReward* K2Node_DynamicCast_AsPure_Text_Reward, bool K2Node_DynamicCast_bSuccess_3, class USchematicReward* K2Node_DynamicCast_AsSchematic_Reward, bool K2Node_DynamicCast_bSuccess_4, FLinearColor CallFunc_MenuColors_OutputColor, class USchematicItem* CallFunc_GetSchematicItem_ReturnValue, FColor CallFunc_GetIconTint_ReturnValue, class UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_5, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, class UTexture* CallFunc_GetIcon_ReturnValue, TSubclassOf<class AItem> CallFunc_GetItemClass_ReturnValue, FText CallFunc_GetTitle_ReturnValue, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FText CallFunc_GetGearName_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FString CallFunc_GetDisplayName_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Format_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_3, class UUnlockDifficultyReward* K2Node_DynamicCast_AsUnlock_Difficulty_Reward, bool K2Node_DynamicCast_bSuccess_6, class UItemBlueprintReward* K2Node_DynamicCast_AsItem_Blueprint_Reward, bool K2Node_DynamicCast_bSuccess_7, UClass* CallFunc_LoadClass_ReturnValue, class URetirementReward* K2Node_DynamicCast_AsRetirement_Reward, bool K2Node_DynamicCast_bSuccess_8, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue_1, FText CallFunc_Select_Character_Class_Text_OutText, FText CallFunc_GetGearName_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_5, class UTexture2D* CallFunc_GetPreviewImage_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_4, FText CallFunc_Format_ReturnValue_4, class UUnlockComplexityReward* K2Node_DynamicCast_AsUnlock_Complexity_Reward, bool K2Node_DynamicCast_bSuccess_9, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_6, class UUnlockDurationReward* K2Node_DynamicCast_AsUnlock_Duration_Reward, bool K2Node_DynamicCast_bSuccess_10, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_5, FText CallFunc_Format_ReturnValue_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_7, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_6, class UUnlockMissionTypeReward* K2Node_DynamicCast_AsUnlock_Mission_Type_Reward, bool K2Node_DynamicCast_bSuccess_11, FText CallFunc_Format_ReturnValue_6, class UUnlockPlanetZoneReward* K2Node_DynamicCast_AsUnlock_Planet_Zone_Reward, bool K2Node_DynamicCast_bSuccess_12);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardUnlock(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_GetUnlockDetails_IsHidden, FText CallFunc_GetUnlockDetails_OutTitle, class UTexture* CallFunc_GetUnlockDetails_Icon, FLinearColor CallFunc_GetUnlockDetails_IconTint, class UTexture2D* CallFunc_GetUnlockDetails_BigImage, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateBrush K2Node_MakeStruct_SlateBrush, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GetUnlockDetails_IsHidden_1, FText CallFunc_GetUnlockDetails_OutTitle_1, class UTexture* CallFunc_GetUnlockDetails_Icon_1, FLinearColor CallFunc_GetUnlockDetails_IconTint_1, class UTexture2D* CallFunc_GetUnlockDetails_BigImage_1, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility K2Node_Select_Default_2, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_SelectCharacterID_OutputPin, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess_1, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue, class UPlayerCharacterID* CallFunc_SelectCharacterID_OutputPin_1);
};

#endif