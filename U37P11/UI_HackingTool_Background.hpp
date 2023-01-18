#ifndef UE4SS_SDK_UI_HackingTool_Background_HPP
#define UE4SS_SDK_UI_HackingTool_Background_HPP

class UUI_HackingTool_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* BulletsBox;
    class UTextBlock* Progress_Text;
    class UTextBlock* SubProgress_Text;
    int32 Stage;
    int32 MaxStages;
    TArray<class UImage*> Transitions;
    TArray<class UImage*> Bullets;
    FText Header;
    FText SubHeader;

    void SetSubHeader(FText InText);
    void SetHeader(FText InText);
    void NextStage();
    void SetCurrentStage(int32 Stage);
    void SetMaxStages(int32 InMaxStages);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Background(int32 EntryPoint);
};

#endif
