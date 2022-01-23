#ifndef UE4SS_SDK_UI_RewardUnlock_Vanity_HPP
#define UE4SS_SDK_UI_RewardUnlock_Vanity_HPP

class UUI_RewardUnlock_Vanity_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UImage* CategoryIcon;
    class USizeBox* CategorySizer;
    class UOverlay* IconOverlay;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon;
    class UTextBlock* Subtitle;
    class UHorizontalBox* TextAndCharacterBox;
    class UTextBlock* UnlockTitle;

    void SetCharacterIcon(class UPlayerCharacterID* characterID, class UPlayerCharacterID*& OutCharacterID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID*& OutputPin, bool Temp_bool_Variable, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* K2Node_Select_Default);
    void GetUnlockDetails(FText& OutTitle, FText& OutSubTitle, class UTexture*& Icon, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_1, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue, class UTexture2D* CallFunc_GetCraftableIcon_ReturnValue, FText CallFunc_GetPickaxePartLocationTitle_OutTitle, const FText CallFunc_GetCraftableName_ReturnValue, EVanitySlot CallFunc_GetVanitySlot_ReturnValue, FText CallFunc_GetVanitySlotTitle_OutTitle, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void Construct();
    void ExecuteUbergraph_UI_RewardUnlock_Vanity(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, class UArmorMaterialVanityItem* K2Node_DynamicCast_AsArmor_Material_Vanity_Item, bool K2Node_DynamicCast_bSuccess_1, class UPlayerCharacterID* CallFunc_SetCharacterIcon_OutCharacterID, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerCharacterID* CallFunc_SelectCharacterID_OutputPin, class UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess_2, class UPlayerCharacterID* CallFunc_SelectCharacterID_OutputPin_1, EPickaxePartLocation CallFunc_GetPrefferedLocation_ReturnValue, FText CallFunc_GetUnlockDetails_OutTitle, FText CallFunc_GetUnlockDetails_OutSubTitle, class UTexture* CallFunc_GetUnlockDetails_Icon, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_3, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue);
};

#endif
