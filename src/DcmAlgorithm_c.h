#ifndef DcmAlgorithm_c_h
#define DcmAlgorithm_c_h

struct DcmAlgorithm;
typedef struct DcmAlgorithm DcmAlgorithm;

struct DcmAlgorithm* dcmInitialize(void);
void dcmUninitialize(struct DcmAlgorithm* dcm);
void dcmUpdate(struct DcmAlgorithm* dcm, float dt, float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
float dcmGetRoll(struct DcmAlgorithm* dcm);
float dcmGetPitch(struct DcmAlgorithm* dcm);
float dcmGetYaw(struct DcmAlgorithm* dcm);

#endif

