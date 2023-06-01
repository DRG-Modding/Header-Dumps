#ifndef UE4SS_SDK_UI_JettyBoots_Gate_HPP
#define UE4SS_SDK_UI_JettyBoots_Gate_HPP

class UUI_JettyBoots_Gate_C : public UUI_JettyBoots_Obstacle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_JettyBoots_Column_C* BottomColumn;
    class UUI_JettyBoots_Column_C* TopColumn;
    int32 Gate Width;
    FSpriteRect Top Rect;
    FSpriteRect Bottom Rect;
    FJettyBootSetting PreviewLevelSettings;
    int32 PreviewCanvasHeight;
    bool PreviewFirstGate;

    void OnInitialize(FRandomStream& InRandom, FJettyBootSetting InLevelSettings, int32 InCanvasHeight, int32 InStartX, bool InIsFirstGate, int32& OutStartX, int32& OutEndX);
    void Intersects(FSpriteRect InRect, bool& OutIntersects);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_Gate(int32 EntryPoint);
};

#endif
