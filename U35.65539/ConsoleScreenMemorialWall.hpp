#ifndef UE4SS_SDK_ConsoleScreenMemorialWall_HPP
#define UE4SS_SDK_ConsoleScreenMemorialWall_HPP

class UConsoleScreenMemorialWall_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UImage* Image_0;
    UOverlay* Overlay_0;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_6;
    UTextBlock* TextBlock_146;
    UDataTable* TestersDataTable;
    TArray<int32> RowsToDisplay;
    int32 SpawnIndex;
    float TimeBetweenLines;
    float AnimationSpeed;
    TArray<UUI_ConsoleMemorialLine_C*> Lines;
    float Timer;
    bool IsFast;
    float FastTimeToSpawn;
    float SlowTimeToSpawn;
    float FastSpeed;
    float SlowSpeed;

    void SetLinesSpeed(float Speed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UUI_ConsoleMemorialLine_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void RemoveLine(UUI_ConsoleMemorialLine_C* NewParam, bool CallFunc_Array_RemoveItem_ReturnValue);
    void SetAnimationSpeed(bool IsFast, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
    void SpawnNewLine(int32 Temp_int_Variable, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UUI_ConsoleMemorialLine_C* CallFunc_Create_ReturnValue, FText CallFunc_GetNameFromRow_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    FText GetNameFromRow(int32 RowTArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, FName CallFunc_Array_Get_Item, FTesterName CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreenMemorialWall(int32 EntryPoint, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1);
}

#endif
