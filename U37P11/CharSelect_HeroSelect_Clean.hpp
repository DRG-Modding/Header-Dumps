#ifndef UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP

class UCharSelect_HeroSelect_Clean_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UICON_HeroSelect_C* ICON_HeroSelect_65;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_66;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_67;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_68;
    class UHorizontalBox* SelectionBox;
    FCharSelect_HeroSelect_Clean_COnCharacterSelected OnCharacterSelected;
    void OnCharacterSelected(class UPlayerCharacterID* Character);
    class UAudioComponent* ShoutAudioComponent;
    FCharSelect_HeroSelect_Clean_COnCharacterHovered OnCharacterHovered;
    void OnCharacterHovered(class UPlayerCharacterID* Character);
    bool DoSelectedShouts;
    FCharSelect_HeroSelect_Clean_COnCharacterUnhovered OnCharacterUnhovered;
    void OnCharacterUnhovered(class UPlayerCharacterID* characterID);
    FCharSelect_HeroSelect_Clean_COnRetirementHovered OnRetirementHovered;
    void OnRetirementHovered(class UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetirementUnhovered OnRetirementUnhovered;
    void OnRetirementUnhovered(class UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetireCharacter OnRetireCharacter;
    void OnRetireCharacter(class UPlayerCharacterID* Character);
    bool OnlyShowCharactersNotInUse;
    bool CanSelectCharacters;
    bool CanPromote;
    TArray<class UICON_HeroSelect_C*> HeroWidgets;
    FMargin IconPadding;

    void HighlightClassChallenge(TArray<class UObject*>& ClassRefs, bool ShouldHighlight, class USeasonChallenge* Challenge);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetSelectedIndex(int32 Index, bool& Valid);
    void GetSelectedIndex(int32& Index);
    FEventReply HandleKeyEvent(FKeyEvent& InKeyEvent, bool IsDown, bool& Handled);
    void Select();
    void Prev();
    void Next();
    void OnCharacterSelected_Event(class UPlayerCharacterID* Character);
    void Update();
    void OnHovered_Event_0(class UPlayerCharacterID* Character);
    void OnSelect();
    void RetirementHovered(class UPlayerCharacterID* Character);
    void RetirementUnHovered(class UPlayerCharacterID* Character);
    void RetireCharacter(class UPlayerCharacterID* Character);
    void OnUnHoveredEvent(class UPlayerCharacterID* characterID);
    void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32 EntryPoint);
    void OnCharacterUnhovered__DelegateSignature(class UPlayerCharacterID* characterID);
    void OnRetireCharacter__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
};

#endif
