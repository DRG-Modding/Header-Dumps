#ifndef UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP

class UITM_Wardrobe_ClassSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBasic_ButtonScalable2_C* BTN_Switch;
    class UTextBlock* DATA_CharacterLevel;
    class UTextBlock* DATA_ClassName;
    class UBorder* HeaderBG;
    class UImage* Image_3;
    class UITM_ItemUnlockedIcon_C* NotificationIcon;
    class UBasic_ScrollArrow_C* ScrollLeft;
    class UBasic_ScrollArrow_C* ScrollRight;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_1;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    class UPlayerCharacterID* currentCharacter;
    FITM_Wardrobe_ClassSelector_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<class APlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;
    class UObject* CategoryID;
    bool UpdatePreviewCharacter;
    bool ShowOtherClassesNotifications;

    FEventReply HandleKeyInput(FKeyEvent& InKeyEvent, bool& Handled);
    void SetSwitchButtonState();
    void GetPrevCharacter(class UPlayerCharacterID*& Character);
    void GetNextCharacter(class UPlayerCharacterID*& Character);
    void GetBPGameState(class ABP_GameState_C*& GameState);
    void SetCharacterInfo(class UPlayerCharacterID* characterID);
    void PreConstruct(bool IsDesignTime);
    void SetData(class UPlayerCharacterID* Character, class UObject* CategoryID);
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateNotification();
    void ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32 EntryPoint);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
};

#endif
