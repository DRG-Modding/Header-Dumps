#ifndef UE4SS_SDK_Itm_LevelSelectIcon_HPP
#define UE4SS_SDK_Itm_LevelSelectIcon_HPP

class UItm_LevelSelectIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScaleUp;
    class UButton* Button_Outer;
    class UImage* Image_Icon;
    FVector2D Size;
    bool IsSelected;
    FItm_LevelSelectIcon_CClicked Clicked;
    void Clicked(int32 Level);
    int32 startLevel;
    int32 numberOfLevels;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Update(bool InIsSelected);
    void ExecuteUbergraph_Itm_LevelSelectIcon(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Level);
};

#endif
