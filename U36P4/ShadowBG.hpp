#ifndef UE4SS_SDK_ShadowBG_HPP
#define UE4SS_SDK_ShadowBG_HPP

class UShadowBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_62;
    FLinearColor Color;
    float EdgeSharpness;

    void SetEdgeSharpness(float EdgeSharpness1);
    void SetColor(FLinearColor Color);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ShadowBG(int32 EntryPoint);
};

#endif
