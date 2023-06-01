#ifndef UE4SS_SDK_UI_JettyBoots_Obstacle_HPP
#define UE4SS_SDK_UI_JettyBoots_Obstacle_HPP

class UUI_JettyBoots_Obstacle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PointsGathered(FSpriteRect InRect, bool& OutGatheredPoints, int32& OutPoints);
    void CalculateColumn(class UUI_JettyBoots_Column_C* InColumn, int32 InStartX, int32 InGateWidth, float InTop, float InBottom, FSpriteRect& OutRect);
    void SetColumnRect(class UUI_JettyBoots_Column_C* Column, FSpriteRect Rect, float StartX);
    void OnInitialize(FRandomStream& InRandom, FJettyBootSetting InLevelSettings, int32 InCanvasHeight, int32 InStartX, bool InIsFirstGate, int32& OutStartX, int32& OutEndX);
    void Init(FRandomStream& InRandom, FJettyBootSetting InLevelSettings, int32 InCanvasHeight, int32 InStartX, bool InIsFirstGate, int32& OutEndX);
    void Intersects(FSpriteRect InRect, bool& OutIntersects);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_Obstacle(int32 EntryPoint);
};

#endif
