#ifndef UE4SS_SDK_MENU_LockedTemplate_HPP
#define UE4SS_SDK_MENU_LockedTemplate_HPP

class UMENU_LockedTemplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimLock;
    class UNamedSlot* BodySlot;
    class URichTextBlock* BodyText;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UTextBlock* HeaderText;
    class UImage* ImageLock;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    bool Locked;
    FText Message;
    class UTexture2D* LockIcon;

    void GetIsUnlocked(bool& Locked, bool CallFunc_Not_PreBool_ReturnValue);
    void GetIsLocked(bool& Locked);
    void RequireOnePromotedCharacter(bool& Locked, FText PromoteMsg, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_HasAnyCharacterRetired_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetMenuLocked_Locked);
    void SetLockIcon(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetMessaqe(const FText InText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_TextToUpper_ReturnValue);
    void SetMenuLocked(bool IsLocked, bool& Locked, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsOkMenu_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Close();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void LockAnimFinished();
    void ExecuteUbergraph_MENU_LockedTemplate(int32 EntryPoint, FExecuteUbergraph_MENU_LockedTemplateK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
};

#endif
