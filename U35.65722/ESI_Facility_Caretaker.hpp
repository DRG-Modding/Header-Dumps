#ifndef UE4SS_SDK_ESI_Facility_Caretaker_HPP
#define UE4SS_SDK_ESI_Facility_Caretaker_HPP

class AESI_Facility_Caretaker_C : public AESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh4;
    class USkeletalMeshComponent* SkeletalMesh3;
    class USkeletalMeshComponent* SkeletalMesh2;
    class USkeletalMeshComponent* SkeletalMesh1;
    class USkeletalMeshComponent* ActiveEye;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Facility_Caretaker(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2);
};

#endif
