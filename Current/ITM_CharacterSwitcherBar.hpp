#ifndef UE4SS_SDK_ITM_CharacterSwitcherBar_HPP
#define UE4SS_SDK_ITM_CharacterSwitcherBar_HPP

class UITM_CharacterSwitcherBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBasic_ButtonScalable2_C* BTN_Switch;
    class UTextBlock* DATA_CharacterLevel;
    class UTextBlock* DATA_ClassName;
    class UBorder* HeaderBG;
    class UImage* Image_3;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UBasic_ScrollArrow_C* ScrollLeft;
    class UBasic_ScrollArrow_C* ScrollRight;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    class UPlayerCharacterID* currentCharacter;
    FITM_CharacterSwitcherBar_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<class APlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;

    FEventReply Handle Key Input(const FKeyEvent& InKeyEvent, bool& Handled);
    void CheckArmorUnlocks();
    void GotoNext(bool Next, bool PlaySound);
    void SetSwitchButtonState();
    void GetPrevCharacter(class UPlayerCharacterID*& Character);
    void GetNextCharacter(class UPlayerCharacterID*& Character);
    void SetCharacterInfo(class UPlayerCharacterID* playerClass);
    void PreConstruct(bool IsDesignTime);
    void SetData(class UPlayerCharacterID* Character);
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateNotification();
    void ExecuteUbergraph_ITM_CharacterSwitcherBar(int32 EntryPoint);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
};

#endif
