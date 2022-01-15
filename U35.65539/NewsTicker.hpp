#ifndef UE4SS_SDK_NewsTicker_HPP
#define UE4SS_SDK_NewsTicker_HPP

class UNewsTicker_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasPanel_0;
    UTextBlock* TextBlock_379;
    float StartXPosition;
    float ScrollSpeed;
    FString TextContents;
    float Tickerlength;
    float BackToStart;
    TArray<FString> TextArray;

    FText GetText_0(FText CallFunc_Conv_StringToText_ReturnValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_NewsTicker(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
