#ifndef UE4SS_SDK_ConsoleScreenMemorialWall_HPP
#define UE4SS_SDK_ConsoleScreenMemorialWall_HPP

class UConsoleScreenMemorialWall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UImage* Image_0;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_6;
    class UTextBlock* TextBlock_146;
    class UDataTable* TestersDataTable;
    TArray<int32> RowsToDisplay;
    int32 SpawnIndex;
    float TimeBetweenLines;
    float AnimationSpeed;
    TArray<class UUI_ConsoleMemorialLine_C*> Lines;
    float Timer;
    bool IsFast;
    float FastTimeToSpawn;
    float SlowTimeToSpawn;
    float FastSpeed;
    float SlowSpeed;

    void SetLinesSpeed(float Speed);
    void RemoveLine(class UUI_ConsoleMemorialLine_C* NewParam);
    void SetAnimationSpeed(bool IsFast);
    void SpawnNewLine();
    FText GetNameFromRow(int32 Row);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreenMemorialWall(int32 EntryPoint);
};

#endif
