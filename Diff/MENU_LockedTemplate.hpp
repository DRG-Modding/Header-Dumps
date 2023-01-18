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

    void GetIsUnlocked(bool& Locked);
    void GetIsLocked(bool& Locked);
    void RequireOnePromotedCharacter(bool& Locked);
    void SetLockIcon(class UTexture2D* Texture);
    void SetMessaqe(const FText InText);
    void SetMenuLocked(bool IsLocked, bool& Locked);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Close();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void LockAnimFinished();
    void ExecuteUbergraph_MENU_LockedTemplate(int32 EntryPoint);
};

#endif
