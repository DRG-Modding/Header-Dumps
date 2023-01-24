#ifndef UE4SS_SDK_UI_ClassInfo_CharacterSelector_HPP
#define UE4SS_SDK_UI_ClassInfo_CharacterSelector_HPP

class UUI_ClassInfo_CharacterSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* IconParent;
    FUI_ClassInfo_CharacterSelector_COnClassSelected OnClassSelected;
    void OnClassSelected(TSubclassOf<class APlayerCharacter> playerClass);
    class UUI_ClassInfo_CharacterIcon_C* SelectedClassIcon;
    FUI_ClassInfo_CharacterSelector_COnClassHoverBegin OnClassHoverBegin;
    void OnClassHoverBegin(TSubclassOf<class APlayerCharacter> Class);
    FUI_ClassInfo_CharacterSelector_COnClassHoverEnd OnClassHoverEnd;
    void OnClassHoverEnd(TSubclassOf<class APlayerCharacter> Class);
    bool LockClassSelection;

    void ButtonHoverEnd(class UUI_ClassInfo_CharacterIcon_C* Button);
    void ButtonHoverBegin(class UUI_ClassInfo_CharacterIcon_C* Button);
    void SelectClass(TSubclassOf<class APlayerCharacter> Class);
    void ButtonClicked(class UUI_ClassInfo_CharacterIcon_C* Button);
    void AddClass(TSubclassOf<class APlayerCharacter> Class);
    void Construct();
    void ExecuteUbergraph_UI_ClassInfo_CharacterSelector(int32 EntryPoint);
    void OnClassHoverEnd__DelegateSignature(TSubclassOf<class APlayerCharacter> Class);
    void OnClassHoverBegin__DelegateSignature(TSubclassOf<class APlayerCharacter> Class);
    void OnClassSelected__DelegateSignature(TSubclassOf<class APlayerCharacter> playerClass);
};

#endif
