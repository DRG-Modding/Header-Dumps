#ifndef UE4SS_SDK_ScrollLIst_Category_Window_HPP
#define UE4SS_SDK_ScrollLIst_Category_Window_HPP

class UScrollLIst_Category_Window_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_List_Element_C* Basic_List_Element;
    class ULore_List_Element_C* Basic_List_Element_C_0;
    class ULore_List_Element_C* Basic_List_Element_C_1;
    class ULore_List_Filler_C* Lore_List_Filler;
    class UScrollBox* ScrollBox_List;
    class U_MENU_MinersManual_C* _MENU_MinersManual;
    class ULore_List_Element_C* SelectedButton;
    TArray<class ULore_List_Element_C*> CurrButtons;
    int32 TempIndex;
    TArray<class ULore_List_Element_C*> AnimationQueue;
    float TimeBetweenAnimations;
    float LastAnimStartTime;
    int32 PendingButtonClick;
    bool IsAutoScrolling;
    class ULore_List_Filler_C* FillerElement;
    int32 #PendingButtons;

    void SelectNext(int32 Direction);
    void CreateButton(FMM_ButtonInfo Button, FText HeaderText, bool ShouldClick, bool ShowArrow, int32 Index);
    void OnClicked(int32 Index);
    void SetData(class U_MENU_MinersManual_C* _MENU_MinersManual);
    void PlayButtonIntro(class ULore_List_Element_C* Target);
    void Clear();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PlayAnimInternal(class ULore_List_Element_C* Target);
    void CheckForHeader(class ULore_List_Element_C* Target);
    void Construct();
    void CustomEvent(float CurrentOffset);
    void ScrollIntoViewDelay(class UWidget* WidgetToFind);
    void PrepareNewSection(int32 NumberOfButtons);
    void OnInitialized();
    void DecreseFillSpace();
    void SetSelectedButton(int32 Index);
    void ExecuteUbergraph_ScrollLIst_Category_Window(int32 EntryPoint);
};

#endif
