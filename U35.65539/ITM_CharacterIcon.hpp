#ifndef UE4SS_SDK_ITM_CharacterIcon_HPP
#define UE4SS_SDK_ITM_CharacterIcon_HPP

class UITM_CharacterIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Border_CharacterColor;
    UImage* Border_CharacterColorBG;
    UImage* Border_Outer;
    UUI_MaskedImage_C* Icon_Character;
    UITM_HostIcon_C* Icon_Host;
    UITM_RetirementBadge_C* Icon_Promotion;
    UITM_SonyTeamLeader_C* Icon_SonyTeamLeader;
    USizeBox* SizeBox_0;
    UPlayerCharacterID* Character;
    bool ShowPromotion;
    bool ShowHost;
    float Base Icon Size;
    bool ShowSessionLeader;

    void SetShowSonySessionLeader(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetFromCharacterID(UPlayerCharacterID* characterID, bool CallFunc_IsValid_ReturnValue);
    void SetFromCharacterClass(UPlayerCharacterID* InCharacterClass, bool CallFunc_IsValid_ReturnValue);
    void SetFromPlayerCharacter(UPlayerCharacter* Character, bool CallFunc_IsValid_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue);
    void SetFromPlayerState(UPlayerState* InState, UFSDPlayerState* FsdState, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetBaseSize(float Size, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FMargin K2Node_MakeStruct_Margin_1);
    void SetShowPromotion(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetImage(UTexture2D* Value, FLinearColor InColorAndOpacity);
    void SetCharacterImageAndColor(UPlayerCharacterID* Character, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_GetColor_ReturnValue, UTexture2D* CallFunc_GetIcon_ReturnValue);
    void SetShowHostIcon(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
