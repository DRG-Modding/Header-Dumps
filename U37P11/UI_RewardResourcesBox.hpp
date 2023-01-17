#ifndef UE4SS_SDK_UI_RewardResourcesBox_HPP
#define UE4SS_SDK_UI_RewardResourcesBox_HPP

class UUI_RewardResourcesBox_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UHorizontalBox* HorizontalBox_1;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UHorizontalBox* ResourceHolder;
    class UTextBlock* UnlockedText;
    TArray<class URewardWidget*> ResourceWidgets;

    void HasResources(bool& HasResources);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void AddResource(class URewardWidget* RewardWidget);
    void Clear();
    void ExecuteUbergraph_UI_RewardResourcesBox(int32 EntryPoint);
};

#endif
