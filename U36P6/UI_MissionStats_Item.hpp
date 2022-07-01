#ifndef UE4SS_SDK_UI_MissionStats_Item_HPP
#define UE4SS_SDK_UI_MissionStats_Item_HPP

class UUI_MissionStats_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UBorder* LineBorder;
    class UTextBlock* TitleText;
    class UTextBlock* TotalText;
    class UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_MissionStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UUI_MissionStats_Item_C* Sender);
    FUI_MissionStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UUI_MissionStats_Item_C* Sender);
    class UTexture2D* CategoryIcon;

    bool IsInteractable();
    void SetCategoryFilter(TArray<class UTexture2D*>& Filter);
    void GetMissionStat(class UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCountChanged_Event(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    void Set Selected(bool Selected);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_MissionStats_Item(int32 EntryPoint);
    void OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
};

#endif
