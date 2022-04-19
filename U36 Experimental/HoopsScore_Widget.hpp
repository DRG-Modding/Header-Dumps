#ifndef UE4SS_SDK_HoopsScore_Widget_HPP
#define UE4SS_SDK_HoopsScore_Widget_HPP

class UHoopsScore_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_Empty_C* ConsoleScreen_Empty;
    class UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void Construct();
    void ExecuteUbergraph_HoopsScore_Widget(int32 EntryPoint);
};

#endif
