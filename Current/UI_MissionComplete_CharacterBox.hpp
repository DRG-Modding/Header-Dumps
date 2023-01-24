#ifndef UE4SS_SDK_UI_MissionComplete_CharacterBox_HPP
#define UE4SS_SDK_UI_MissionComplete_CharacterBox_HPP

class UUI_MissionComplete_CharacterBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimMoveIn;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UButton* BTN_Gamercard;
    class UTextBlock* Data_CharacterClass;
    class UTextBlock* Data_Kills;
    class UTextBlock* Data_Mining;
    class UTextBlock* DATA_PlayerName;
    class UTextBlock* Data_Revives;
    class UImage* Icon_Kills;
    class UImage* Icon_Mining;
    class UImage* Icon_Revives;
    class UImage* Image_Deaths;
    class UTextBlock* TextBlock_Deaths;
    class UUI_MissionComplete_RankLevel_C* UI_MissionComplete_RankLevel;
    class USizeBox* WindowSizeBox;
    class AFSDPlayerState* PlayerState;
    class UPlayerStatsComponent* PlayerStats;
    FCharacterProgress CharacterProgress;
    FUI_MissionComplete_CharacterBox_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    FUI_MissionComplete_CharacterBox_COnMoveInFinished OnMoveInFinished;
    void OnMoveInFinished(class UUI_MissionComplete_CharacterBox_C* Widget);

    void PreConstruct(bool IsDesignTime);
    void Add Stat(FText Description, int32 Amount);
    void BeginCounting();
    void BndEvt__UI_MissionComplete_RankLevel_K2Node_ComponentBoundEvent_0_CounterAnimFinished__DelegateSignature();
    void BeginMoveIn(float InDelay, float InDuration);
    void MoveInFinished();
    void BndEvt__Button_52_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Init(class AFSDPlayerState* State);
    void Construct();
    void ExecuteUbergraph_UI_MissionComplete_CharacterBox(int32 EntryPoint);
    void OnMoveInFinished__DelegateSignature(class UUI_MissionComplete_CharacterBox_C* Widget);
    void OnCountingFinished__DelegateSignature();
};

#endif
