#ifndef UE4SS_SDK_Basic_HUD_BracketWindowBig_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowBig_HPP

class UBasic_HUD_BracketWindowBig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* bgL;
    class UBorder* bgM;
    class UImage* bgR;
    class UImage* edgeL;
    class UBorder* edgeM;
    class UImage* edgeR;
    class UNamedSlot* PutStuffHere;
    float BG_Opacity;
    FLinearColor Edge_Tint;

    void PreConstruct(bool IsDesignTime);
    void Set Edge Color(FLinearColor Edge_Tint);
    void Set Background Opacity(float BG_Opacity);
    void ExecuteUbergraph_Basic_HUD_BracketWindowBig(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_CustomEvent_Edge_Tint, float K2Node_CustomEvent_BG_Opacity, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
