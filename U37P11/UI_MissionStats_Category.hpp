#ifndef UE4SS_SDK_UI_MissionStats_Category_HPP
#define UE4SS_SDK_UI_MissionStats_Category_HPP

class UUI_MissionStats_Category_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AllText;
    class UBorder* Background;
    class UImage* Icon;
    class UTexture2D* CategoryIcon;
    bool CategorySelected;
    bool IsAllCategory;
    FUI_MissionStats_Category_COn Clicked On Clicked;
    void On Clicked(class UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);

    void Click();
    bool IsInteractable();
    void GetCategoryIcon(class UTexture2D*& CategoryIcon);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void IsSelected(bool& CategorySelected);
    void PreConstruct(bool IsDesignTime);
    void Set Selected(bool CategorySelected);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Set Hovered(bool IsHovered);
    void ExecuteUbergraph_UI_MissionStats_Category(int32 EntryPoint);
    void On Clicked__DelegateSignature(class UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
};

#endif
