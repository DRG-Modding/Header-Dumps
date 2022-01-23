#ifndef UE4SS_SDK_ConsoleScreen_Seasons_Progress_HPP
#define UE4SS_SDK_ConsoleScreen_Seasons_Progress_HPP

class UConsoleScreen_Seasons_Progress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BGglow;
    class UITM_Season_Progress_Small_C* ITM_Season_Progress_Small;

    void PreConstruct(bool IsDesignTime);
    void SetData(FSeasonLevel Season Level);
    void ExecuteUbergraph_ConsoleScreen_Seasons_Progress(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FSeasonLevel K2Node_CustomEvent_Season_Level);
};

#endif
