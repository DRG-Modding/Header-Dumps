#ifndef UE4SS_SDK_UI_RewardResource_HPP
#define UE4SS_SDK_UI_RewardResource_HPP

class UUI_RewardResource_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UBasic_AnimatedNumber_C* Basic_AnimatedNumber;
    class UImage* ResourceIcon;
    class USizeBox* SizeBox_2;
    class UResourceData* Resource;
    int32 Amount;
    class UAudioComponent* AudioCounting;

    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardResource(int32 EntryPoint);
};

#endif
