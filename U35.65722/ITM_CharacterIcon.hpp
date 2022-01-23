#ifndef UE4SS_SDK_ITM_CharacterIcon_HPP
#define UE4SS_SDK_ITM_CharacterIcon_HPP

class UITM_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Border_CharacterColor;
    class UImage* Border_CharacterColorBG;
    class UImage* Border_Outer;
    class UUI_MaskedImage_C* Icon_Character;
    class UITM_HostIcon_C* Icon_Host;
    class UITM_RetirementBadge_C* Icon_Promotion;
    class UITM_SonyTeamLeader_C* Icon_SonyTeamLeader;
    class USizeBox* SizeBox_0;
    class UPlayerCharacterID* Character;
    bool ShowPromotion;
    bool ShowHost;
    float Base Icon Size;
    bool ShowSessionLeader;

    void SetShowSonySessionLeader(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetFromCharacterID(class UPlayerCharacterID* characterID, bool CallFunc_IsValid_ReturnValue);
    void SetFromCharacterClass(class UPlayerCharacterID* InCharacterClass, bool CallFunc_IsValid_ReturnValue);
    void SetFromPlayerCharacter(class APlayerCharacter* Character, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue);
    void SetFromPlayerState(class APlayerState* InState, class AFSDPlayerState* FsdState, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetBaseSize(float Size, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FMargin K2Node_MakeStruct_Margin_1);
    void SetShowPromotion(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetImage(class UTexture2D* Value, FLinearColor InColorAndOpacity);
    void SetCharacterImageAndColor(class UPlayerCharacterID* Character, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_GetColor_ReturnValue, class UTexture2D* CallFunc_GetIcon_ReturnValue);
    void SetShowHostIcon(bool Index, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
