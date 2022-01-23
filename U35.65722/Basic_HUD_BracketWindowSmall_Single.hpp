#ifndef UE4SS_SDK_Basic_HUD_BracketWindowSmall_Single_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowSmall_Single_HPP

class UBasic_HUD_BracketWindowSmall_Single_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* bgM;
    class UImage* bgR;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* edgeR;
    class UNamedSlot* PutStuffHere;
    bool Mirror;
    TEnumAsByte<ENUM_MenuColors::Type> Color;

    void SetEdgeColor(TEnumAsByte<ENUM_MenuColors::Type> Input, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_HUD_BracketWindowSmall_Single(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, FVector2D K2Node_Select_Default);
};

#endif
