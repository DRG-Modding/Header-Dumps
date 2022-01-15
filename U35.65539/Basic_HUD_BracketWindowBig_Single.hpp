#ifndef UE4SS_SDK_Basic_HUD_BracketWindowBig_Single_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowBig_Single_HPP

class UBasic_HUD_BracketWindowBig_Single_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* bgM;
    UImage* bgR;
    UCanvasPanel* CanvasPanel_0;
    UBorder* edgeM;
    UImage* edgeR;
    UNamedSlot* PutStuffHere;
    float BG_Opacity;
    FLinearColor Edge_Tint;
    bool Mirror;
    TEnumAsByte<ENUM_MenuColors::Type> Color;

    void PreConstruct(bool IsDesignTime);
    void Set Edge Color(FLinearColor Edge_Tint);
    void Set Background Opacity(float BG_Opacity);
    void ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_CustomEvent_Edge_Tint, float K2Node_CustomEvent_BG_Opacity, FLinearColor CallFunc_MenuColors_OutputColor_1, FVector2D K2Node_Select_Default);
}

#endif
