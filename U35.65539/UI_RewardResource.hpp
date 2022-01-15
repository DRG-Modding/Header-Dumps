#ifndef UE4SS_SDK_UI_RewardResource_HPP
#define UE4SS_SDK_UI_RewardResource_HPP

class UUI_RewardResource_C : URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* CelebrateAnim;
    UBasic_AnimatedNumber_C* Basic_AnimatedNumber;
    UImage* ResourceIcon;
    USizeBox* SizeBox_2;
    UResourceData* Resource;
    int32 Amount;
    UAudioComponent* AudioCounting;

    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardResource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
}

#endif
