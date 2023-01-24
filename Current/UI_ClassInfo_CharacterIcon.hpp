#ifndef UE4SS_SDK_UI_ClassInfo_CharacterIcon_HPP
#define UE4SS_SDK_UI_ClassInfo_CharacterIcon_HPP

class UUI_ClassInfo_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BorderSelectionBorder;
    class UProgressBar* CharacterProgress;
    class USizeBox* CharacterProgressSize;
    class UTextBlock* ClassLevel;
    class UTextBlock* ClassName;
    class UImage* IconImage;
    bool Selected;
    bool Hovering;
    class UUI_ClassInfo_CharacterSelector_C* Selector;
    float ScaleNormal;
    float ScaleHover;
    TSubclassOf<class APlayerCharacter> playerClass;
    float TargetScale;
    float CurrentScale;
    FLinearColor BorderColor;

    void GetBorderAlpha(float& alpha);
    void SetBorderAlpha(float alpha);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetScale(float Scale, bool Immediatly);
    void OnClassSelected(TSubclassOf<class APlayerCharacter> playerClass);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Init(TSubclassOf<class APlayerCharacter> playerClass, class UUI_ClassInfo_CharacterSelector_C* Selector);
    void Deselect();
    void Select(bool FirstTime);
    void Construct();
    void ExecuteUbergraph_UI_ClassInfo_CharacterIcon(int32 EntryPoint);
};

#endif
