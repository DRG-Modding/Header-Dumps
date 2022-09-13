#ifndef UE4SS_SDK_Basic_HUD_BracketWindowBig_Single_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowBig_Single_HPP

class UBasic_HUD_BracketWindowBig_Single_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* bgM;
    class UImage* bgR;
    class UCanvasPanel* CanvasPanel_0;
    class UBorder* edgeM;
    class UImage* edgeR;
    class UNamedSlot* PutStuffHere;
    float BG_Opacity;
    FLinearColor Edge_Tint;
    bool Mirror;
    TEnumAsByte<ENUM_MenuColors::Type> Color;

    void PreConstruct(bool IsDesignTime);
    void Set Edge Color(FLinearColor Edge_Tint);
    void Set Background Opacity(float BG_Opacity);
    void ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single(int32 EntryPoint);
};

#endif
