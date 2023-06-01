#ifndef UE4SS_SDK_UI_Forge_Rewards_Selector_HPP
#define UE4SS_SDK_UI_Forge_Rewards_Selector_HPP

class UUI_Forge_Rewards_Selector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimBeginSelection;
    class UBackgroundBlur* FadeBlur;
    class UUI_Forge_Rewards_SelectorItem_C* Item_Left;
    class UUI_Forge_Rewards_SelectorItem_C* Item_Right;
    class UHorizontalBox* Selection_Panel;
    FUI_Forge_Rewards_Selector_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(class USchematic* InReward);
    int32 Level;
    FVector2D Offset;

    void Reset();
    void EndPickReward(class USchematic* InReward);
    void PopRandomReward(const TMap<class UPlayerCharacterID*, class USchematic*>& Rewards, FRandomStream Random, class UPlayerCharacterID*& OutCharacter, class USchematic*& OutReward);
    void Begin Pick Reward(int32 InLevel, int32 InSeed);
    void Construct();
    void OnClicked(class USchematic* InSchematic);
    void OnIntroStarted();
    void OnIntroEnded();
    void TryPing();
    void BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature();
    void BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature();
    void BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature();
    void BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature();
    void OnPingEnded();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_Rewards_Selector(int32 EntryPoint);
    void OnRewardSelected__DelegateSignature(class USchematic* InReward);
};

#endif
