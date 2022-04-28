#ifndef UE4SS_SDK_ITM_NewsTicker_HPP
#define UE4SS_SDK_ITM_NewsTicker_HPP

class UITM_NewsTicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_TickerText_C* UI_TickerText;
    class UNewsTextHeadlines* MineralTradeData;
    int32 LastSeed;
    bool IsTesting;
    class UMissionNameBank* MissionNames;
    class UNewsTextLists* NewsTexts;

    FString GenerateFluffStock(const FRandomStream& RandomStream);
    void GenerateTickerText();
    void Construct();
    void CheckForNewText();
    void ExecuteUbergraph_ITM_NewsTicker(int32 EntryPoint);
};

#endif
