#ifndef UE4SS_SDK_ConsoleScreen_Seasons_NextReward_HPP
#define UE4SS_SDK_ConsoleScreen_Seasons_NextReward_HPP

class UConsoleScreen_Seasons_NextReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BGglow;
    class UBorder* Border_3;
    class UImage* I_Background;
    class UImage* I_Gradient;
    class UITM_Season_RewardImageSingle_C* ITM_BP_RewardImageSingle;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;
    class UTextBlock* TextBlock_Title_1;

    void SetData(FSeasonLevel Season Level);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Seasons_NextReward(int32 EntryPoint);
};

#endif
