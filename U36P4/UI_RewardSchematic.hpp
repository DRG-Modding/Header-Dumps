#ifndef UE4SS_SDK_UI_RewardSchematic_HPP
#define UE4SS_SDK_UI_RewardSchematic_HPP

class UUI_RewardSchematic_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrationAnim;
    class UUI_Forge_Schematic_C* UI_Forge_Schematic;
    class UTextBlock* UnlockedText;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PlayReceiveAnim();
    void ExecuteUbergraph_UI_RewardSchematic(int32 EntryPoint);
};

#endif
