#ifndef UE4SS_SDK_PRJ_GooProjectile_Fragment_Base_HPP
#define UE4SS_SDK_PRJ_GooProjectile_Fragment_Base_HPP

class APRJ_GooProjectile_Fragment_Base_C : UPRJ_BaseNormalGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnInitialized();
    void ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
}

#endif
