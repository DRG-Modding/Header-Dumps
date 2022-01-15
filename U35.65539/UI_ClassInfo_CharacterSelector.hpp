#ifndef UE4SS_SDK_UI_ClassInfo_CharacterSelector_HPP
#define UE4SS_SDK_UI_ClassInfo_CharacterSelector_HPP

class UUI_ClassInfo_CharacterSelector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* IconParent;
    FUI_ClassInfo_CharacterSelector_COnClassSelected OnClassSelected;
    void OnClassSelected(TSubclassOf<UPlayerCharacter> playerClass);
    UUI_ClassInfo_CharacterIcon_C* SelectedClassIcon;
    FUI_ClassInfo_CharacterSelector_COnClassHoverBegin OnClassHoverBegin;
    void OnClassHoverBegin(TSubclassOf<UPlayerCharacter> Class);
    FUI_ClassInfo_CharacterSelector_COnClassHoverEnd OnClassHoverEnd;
    void OnClassHoverEnd(TSubclassOf<UPlayerCharacter> Class);
    bool LockClassSelection;

    void ButtonHoverEnd(UUI_ClassInfo_CharacterIcon_C* Button);
    void ButtonHoverBegin(UUI_ClassInfo_CharacterIcon_C* Button, bool CallFunc_Not_PreBool_ReturnValue);
    void SelectClass(TSubclassOf<UPlayerCharacter> Class);
    void ButtonClicked(UUI_ClassInfo_CharacterIcon_C* Button, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void AddClass(TSubclassOf<UPlayerCharacter> Class, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_ClassInfo_CharacterIcon_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_ClassInfo_CharacterSelector(int32 EntryPoint);
    void OnClassHoverEnd__DelegateSignature(TSubclassOf<UPlayerCharacter> Class);
    void OnClassHoverBegin__DelegateSignature(TSubclassOf<UPlayerCharacter> Class);
    void OnClassSelected__DelegateSignature(TSubclassOf<UPlayerCharacter> playerClass);
}

#endif
