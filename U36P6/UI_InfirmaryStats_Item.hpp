#ifndef UE4SS_SDK_UI_InfirmaryStats_Item_HPP
#define UE4SS_SDK_UI_InfirmaryStats_Item_HPP

class UUI_InfirmaryStats_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UBorder* LineBorder;
    class UTextBlock* TitleText;
    class UTextBlock* TotalText;
    class UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_InfirmaryStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UUI_MissionStats_Item_C* Sender);
    FUI_InfirmaryStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UUI_MissionStats_Item_C* Sender);
    class UTexture2D* CategoryIcon;
    class AFSDPlayerState* Player State;

    bool OwnedByLocal();
    class AFSDPlayerController* GetPlayer();
    void SetCategoryFilter(TArray<class UTexture2D*>& Filter);
    void GetMissionStat(class UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected(bool Selected);
    void MissonStatUpdate(class UMissionStat* MissionStat, FText StatValue);
    void ExecuteUbergraph_UI_InfirmaryStats_Item(int32 EntryPoint);
    void OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
};

#endif
