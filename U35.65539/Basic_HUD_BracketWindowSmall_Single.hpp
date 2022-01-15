#ifndef UE4SS_SDK_Basic_HUD_BracketWindowSmall_Single_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowSmall_Single_HPP

class UBasic_HUD_BracketWindowSmall_Single_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* bgM;
    UImage* bgR;
    UCanvasPanel* CanvasPanel_0;
    UImage* edgeR;
    UNamedSlot* PutStuffHere;
    bool Mirror;
    TEnumAsByte<ENUM_MenuColors::Type> Color;

    void SetEdgeColor(uint8 Input, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_HUD_BracketWindowSmall_Single(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, FVector2D K2Node_Select_Default);
}

#endif
