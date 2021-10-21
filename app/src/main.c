#include "lib/utils/utils.h"
#include "lib/macros.h"
#include "lib/types.h"

int main(int argc, char **argv)
{
  LogType logType;
  LogCode logCode;

  if (argc < 4)
  {
    logType = ERROR;
    logCode = APP_ERROR_USAGE;

    logger(logType, logCode);
    print_usage(argv[0]);

    return EXIT_FAILURE;
  }
  // srand(time(0));

  // char *fileName = argv[1];

  // LinkType type = RECEIVER;
  // if (argv[2][0] == 'T')
  //   type = TRANSMITTER;

  // int port = atoi(argv[3]);

  // /* Options */
  // int timeout = DEFAULT_TIMEOUT_DURATION;
  // int retries = DEFAULT_MAX_TRANSMISSION_ATTEMPS;
  // int baudrate = DEFAULT_BAUDRATE;
  // int fragSize = MAX_FRAGMENT_SIZE;

  // for (int i = 4; i < argc; ++i)
  // {
  //   if (!strncmp(argv[i], "-timeout=", 9) && strlen(argv[i]) > 9)
  //   {
  //     timeout = atoi(&argv[i][9]);
  //     continue;
  //   }

  //   if (!strncmp(argv[i], "-max_retries=", 13) && strlen(argv[i]) > 13)
  //   {
  //     retries = atoi(&argv[i][13]);
  //     continue;
  //   }

  //   if (!strncmp(argv[i], "-baudrate=", 10) && strlen(argv[i]) > 10)
  //   {
  //     baudrate = atoi(&argv[i][10]);
  //     continue;
  //   }

  //   if (!strncmp(argv[i], "-fragSize=", 11) && strlen(argv[i]) > 11)
  //   {
  //     fragSize = atoi(&argv[i][11]);
  //     continue;
  //   }
  // }

  // al_setup(timeout, baudrate, retries, fragSize);

  // int res;
  // if (type == RECEIVER)
  // {
  //   res = al_receiveFile(fileName, port);
  // }
  // else
  // {
  //   res = al_sendFile(fileName, port);
  // }

  // if (res >= 0)
  //   al_print_info();

  return EXIT_SUCCESS;
}